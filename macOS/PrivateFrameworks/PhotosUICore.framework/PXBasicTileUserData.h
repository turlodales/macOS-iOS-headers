//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXViewSpec;

@interface PXBasicTileUserData : NSObject
{
    PXViewSpec *_viewSpec;
}

+ (id)userDataWithViewSpec:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PXViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithViewSpec:(id)arg1;
- (id)init;

@end

