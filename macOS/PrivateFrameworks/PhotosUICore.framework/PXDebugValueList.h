//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

@interface PXDebugValueList : NSObject <NSFastEnumeration>
{
    NSMutableArray *_debugValues;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *debugValues; // @synthesize debugValues=_debugValues;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)addValueWithLabel:(id)arg1 highlightedScore:(double)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2;
- (void)addValueWithLabel:(id)arg1 stringValue:(id)arg2 highlightStyle:(unsigned long long)arg3;
- (void)addValueWithLabel:(id)arg1 integerValue:(long long)arg2;
- (void)addValueWithLabel:(id)arg1 doubleValue:(double)arg2;
- (void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2;
- (void)addValueWithLabel:(id)arg1 boolValue:(BOOL)arg2 positiveValue:(BOOL)arg3 positiveHighlighted:(BOOL)arg4 negativeHighlighted:(BOOL)arg5;
- (void)addValueWithLabel:(id)arg1;
- (id)init;

@end

