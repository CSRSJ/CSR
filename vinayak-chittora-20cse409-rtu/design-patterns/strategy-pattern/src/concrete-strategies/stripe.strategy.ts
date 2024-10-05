import { Injectable } from '@nestjs/common';
import { PaymentStrategy } from 'src/interfaces/shipping-strategy.interface';
/**
 * Implement Concrete Strategies: Then, create different strategies implementing the PaymentStrategy
 * interface.
 */

@Injectable()
export class StripeStrategy implements PaymentStrategy {
  pay(amount: number): string {
    return `Paid ${amount} using Stripe`;
  }
}
