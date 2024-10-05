import { Module } from '@nestjs/common';
import { PaymentService } from './payment.service';
import { PaymentController } from './payment.controller';
import { PayPalStrategy } from 'src/concrete-strategies/paypal.strategy';
import { StripeStrategy } from 'src/concrete-strategies/stripe.strategy';
import { CreditCardStrategy } from 'src/concrete-strategies/credit-card.strategy';

@Module({
  providers: [
    PaymentService,
    PayPalStrategy,
    StripeStrategy,
    CreditCardStrategy,
  ],
  controllers: [PaymentController],
})
export class PaymentModule {}
