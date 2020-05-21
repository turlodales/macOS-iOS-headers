//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGGeneratedLayoutDelegate.h"

@class NSArray, NSString;

@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate>
{
    NSArray *_inputItems;
}

+ (id)mockPaddingValues;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *inputItems; // @synthesize inputItems=_inputItems;
- (void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (struct CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

