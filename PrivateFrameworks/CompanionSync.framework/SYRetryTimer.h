/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@class NSObject<OS_dispatch_source>;

@interface SYRetryTimer : NSObject {
    double _backoffFactor;
    double _interval;
    int _maxRetries;
    int _numRetries;
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)incrementBackoff;
- (id)initWithInterval:(double)arg1 backoffFactor:(double)arg2 maxRetries:(int)arg3 queue:(id)arg4 callout:(id)arg5;

@end
