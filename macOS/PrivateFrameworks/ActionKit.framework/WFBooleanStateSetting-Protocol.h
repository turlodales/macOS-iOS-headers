//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@protocol WFBooleanStateSetting <NSObject>
- (void)setState:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getStateWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
@end

