//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface VTKCompareResult : NSObject
{
    BOOL _succesfull;
    UIImage *_comparisonImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImage *comparisonImage; // @synthesize comparisonImage=_comparisonImage;
@property(readonly, nonatomic, getter=isSuccesfull) BOOL succesfull; // @synthesize succesfull=_succesfull;
- (id)initWithComparisonImage:(id)arg1 isSuccesfull:(BOOL)arg2;

@end

