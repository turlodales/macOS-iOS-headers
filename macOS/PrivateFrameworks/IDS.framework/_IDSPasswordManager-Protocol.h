//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class NSString;

@protocol _IDSPasswordManager <NSObject>
- (void)setPassword:(NSString *)arg1 forUsername:(NSString *)arg2 onService:(NSString *)arg3 completionBlock:(void (^)(NSString *, NSString *, BOOL))arg4;
@end

