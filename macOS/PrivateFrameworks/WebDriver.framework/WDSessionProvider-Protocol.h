//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDictionary;
@protocol WDSession;

@protocol WDSessionProvider
@property(readonly, copy) NSArray *sessions;
- (void)destroySession:(id <WDSession>)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)requestSessionWithOptions:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *, id <WDSession>))arg2;
@end

