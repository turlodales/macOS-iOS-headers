//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAppleEventDescriptor.h>

@interface NSAppleEventDescriptor (AppleScriptObjC)
+ (id)descriptorWithInt64:(long long)arg1;
+ (id)descriptorWithFloat:(float)arg1;
- (id)descriptorForKeyname:(id)arg1;
- (id)container;
- (id)keyData;
- (unsigned int)keyForm;
- (unsigned int)desiredClass;
- (unsigned long long)unsignedIntegerValue;
- (long long)integerValue;
- (unsigned long long)uint64Value;
- (long long)int64Value;
- (unsigned int)uint32Value;
- (float)floatValue;
@end

