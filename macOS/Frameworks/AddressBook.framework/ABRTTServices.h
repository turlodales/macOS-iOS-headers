//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABRTTServices.h"

@class NSString;

@interface ABRTTServices : NSObject <ABRTTServices>
{
}

+ (void)callRTTContact:(id)arg1 withPhoneNumber:(id)arg2;
+ (BOOL)isRTTContact:(id)arg1;
- (void)callRTTContact:(id)arg1 withPhoneNumber:(id)arg2;
- (BOOL)isRTTContact:(id)arg1;
- (BOOL)isTTYEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

