/* Generated by RuntimeBrowser.
 */

@protocol SCRGovernor <NSObject>

@optional

- (void)taskAdministrator:(SCRTaskAdministrator *)arg1 didCompleteTask:(SCRTask *)arg2 withError:(NSError *)arg3;
- (bool)taskAdministrator:(SCRTaskAdministrator *)arg1 isEligibleToPerformTask:(SCRTask *)arg2 eligiblityError:(id*)arg3;
- (void)taskAdministrator:(SCRTaskAdministrator *)arg1 willPerformTask:(SCRTask *)arg2;

@end
