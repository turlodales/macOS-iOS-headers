//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OADSubBlip;

__attribute__((visibility("hidden")))
@interface OADBlip : NSObject
{
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)arg1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned int *)referenceCount;
- (void)setAltSubBlip:(id)arg1;
- (id)altSubBlip;
- (void)setMainSubBlip:(id)arg1;
- (id)mainSubBlip;

@end

