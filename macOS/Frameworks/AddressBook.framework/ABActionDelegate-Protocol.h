//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ABPerson, NSString;

@protocol ABActionDelegate
@property(readonly) NSString *actionProperty;
- (void)performActionForPerson:(ABPerson *)arg1 identifier:(NSString *)arg2;
- (NSString *)titleForPerson:(ABPerson *)arg1 identifier:(NSString *)arg2;
- (NSString *)unlocalizedTitle;

@optional
- (void)performActionForPerson:(ABPerson *)arg1 identifier:(NSString *)arg2 transitionProvider:(id <CNUIShareKitTransitionProvider>)arg3;
- (BOOL)shouldEnableActionForPerson:(ABPerson *)arg1 identifier:(NSString *)arg2;
@end

