/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding> {
    NSUUID * _UUID;
    double  _completeTime;
    bool  _completed;
    double  _createTime;
    __CFN_TransactionMetrics * _currentTransactionMetrics;
    double  _firstResumeTime;
    unsigned long long  _identifier;
    bool  _ignoreNextRedirection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _options;
    long long  _schedulingTier;
    __CFN_SessionMetrics * _sessionMetrics;
    NSMutableArray * _transactionMetrics;
}

@property (retain) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;
@property (nonatomic, retain) NSMutableArray *_daemon_transactionMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_daemon_currentTransactionMetrics;
- (id)_daemon_transactionMetrics;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)set_daemon_currentTransactionMetrics:(id)arg1;
- (void)set_daemon_transactionMetrics:(id)arg1;

@end
