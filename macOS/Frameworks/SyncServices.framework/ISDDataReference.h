//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@class ISDDataWrapper;

@interface ISDDataReference : NSData
{
    ISDDataWrapper *_dataWrapper;
    NSData *_data;
}

+ (void)setCopyDataReferencesAsData:(BOOL)arg1;
+ (id)dataReferenceWithDataWrapper:(id)arg1;
+ (id)dataReferenceWithData:(id)arg1;
- (id)_data;
- (id)description;
- (BOOL)isd_isAttributeSelfConsistent;
- (unsigned long long)length;
- (BOOL)isd_isEqual:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)dataFaultFailure;
- (unsigned long long)hash;
- (const void *)bytes;
- (id)dataWrapper;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDataWrapper:(id)arg1;

@end

