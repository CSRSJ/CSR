/**
 * Create the Strategy Interface: First, define an interface or abstract class that will be used by all the concrete
 * strategies.
 */

export interface PaymentStrategy {
  pay(amount: number): string;
}
