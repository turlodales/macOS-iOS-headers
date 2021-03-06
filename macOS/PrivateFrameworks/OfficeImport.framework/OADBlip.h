//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

