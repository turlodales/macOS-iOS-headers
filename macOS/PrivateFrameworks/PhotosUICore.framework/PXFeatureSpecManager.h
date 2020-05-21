//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import "PXChangeObserver.h"

@class NSString, PXExtendedTraitCollection, PXFeatureSpec;

@interface PXFeatureSpecManager : PXObservable <PXChangeObserver>
{
    PXFeatureSpec *_spec;
    PXExtendedTraitCollection *_extendedTraitCollection;
    unsigned long long _options;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_setSpec:(id)arg1;
- (void)_updateSpec;
- (void)invalidateSpec;
- (id)mutableChangeObject;
- (id)createSpec;
- (Class)specClass;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
@property(readonly, nonatomic) PXFeatureSpec *spec; // @synthesize spec=_spec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

