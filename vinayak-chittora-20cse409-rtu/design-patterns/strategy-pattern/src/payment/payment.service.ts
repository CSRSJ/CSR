import { Injectable } from '@nestjs/common';
import { CreditCardStrategy } from 'src/concrete-strategies/credit-card.strategy';
import { PayPalStrategy } from 'src/concrete-strategies/paypal.strategy';
import { StripeStrategy } from 'src/concrete-strategies/stripe.strategy';
import { PaymentStrategy } from 'src/interfaces/shipping-strategy.interface';

/**
 * Create the Context (Payment Service): The context class (or service in NestJS) is responsible
 * for choosing and using the appropriate strategy based on input or logic.
 */

@Injectable()
export class PaymentService {
  private strategy: PaymentStrategy;

  constructor(
    private readonly payPalStrategy: PayPalStrategy,
    private readonly stripeStrategy: StripeStrategy,
    private readonly creditCardStrategy: CreditCardStrategy,
  ) {}

  // Dynamically set strategy based on input
  setPaymentMethod(method: string) {
    if (method === 'paypal') {
      this.strategy = this.payPalStrategy;
    } else if (method === 'stripe') {
      this.strategy = this.stripeStrategy;
    } else if (method === 'creditcard') {
      this.strategy = this.creditCardStrategy;
    }
  }

  // Perform payment using the selected strategy
  pay(amount: number): string {
    return this.strategy.pay(amount);
  }
}
