//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXTileIdentifierConverter.h"

@class NSArray, NSIndexSet, NSString, PXSectionedDataSource;

@interface PXSectionedTileIdentifierConverter : NSObject <PXTileIdentifierConverter>
{
    PXSectionedDataSource *_fromDataSource;
    PXSectionedDataSource *_toDataSource;
    NSArray *_changeDetails;
    NSIndexSet *_reloadedTileKindsOnObjectChanged;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexSet *reloadedTileKindsOnObjectChanged; // @synthesize reloadedTileKindsOnObjectChanged=_reloadedTileKindsOnObjectChanged;
@property(readonly, nonatomic) NSArray *changeDetails; // @synthesize changeDetails=_changeDetails;
@property(readonly, nonatomic) PXSectionedDataSource *toDataSource; // @synthesize toDataSource=_toDataSource;
@property(readonly, nonatomic) PXSectionedDataSource *fromDataSource; // @synthesize fromDataSource=_fromDataSource;
- (BOOL)reverseTransformTileIdentifier:(struct PXTileIdentifier *)arg1;
- (BOOL)transformTileIdentifier:(struct PXTileIdentifier *)arg1 group:(unsigned long long *)arg2;
- (id)initWithFromDataSource:(id)arg1 toDataSource:(id)arg2 changeDetails:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

