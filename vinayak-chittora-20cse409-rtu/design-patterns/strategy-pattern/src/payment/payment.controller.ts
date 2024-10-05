import { Body, Controller, Post } from '@nestjs/common';
import { PaymentService } from './payment.service';
/**
 * Use Strategy in Controller: You can then inject this service into a controller
 * and dynamically set the strategy based on a condition or user input.
 */
@Controller('payment')
export class PaymentController {
  constructor(private paymentService: PaymentService) {}

  @Post()
  makePayment(@Body() paymentDto: { method: string; amount: number }) {
    const { method, amount } = paymentDto;

    // Set the payment method (strategy)
    this.paymentService.setPaymentMethod(method);

    // Process the payment
    return this.paymentService.pay(amount);
  }
}
