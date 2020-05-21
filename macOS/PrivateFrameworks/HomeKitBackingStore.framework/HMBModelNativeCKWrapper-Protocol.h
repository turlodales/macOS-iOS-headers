//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMBModelObjectCoder.h"

@class HMBModel, HMBModelContainer, HMBModelContainerEncodingContext, NSString;

@protocol HMBModelNativeCKWrapper <HMBModelObjectCoder>
+ (void)applyNativeCKValue:(id <CKRecordValue>)arg1 fromSource:(unsigned long long)arg2 associatingWith:(HMBModelContainer *)arg3 toModel:(HMBModel *)arg4 propertyNamed:(NSString *)arg5;
- (id <CKRecordValue>)nativeCKValueWithEncodingContext:(HMBModelContainerEncodingContext *)arg1 error:(id *)arg2;

@optional
+ (BOOL)includeInModelEncoding;
@end

