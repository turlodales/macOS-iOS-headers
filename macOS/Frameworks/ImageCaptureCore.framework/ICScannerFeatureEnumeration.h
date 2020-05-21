//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ImageCaptureCore/ICScannerFeature.h>

@class NSArray;

@interface ICScannerFeatureEnumeration : ICScannerFeature
{
    id _evProps;
}

- (id)description;
- (id)oldAndNewSettings:(id)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (void)setMenuItemLabelsTooltips:(id)arg1;
- (void)setMenuItemLabels:(id)arg1;
- (void)setDefaultValue:(id)arg1;
@property id currentValue;
@property(readonly) NSArray *menuItemLabelsTooltips;
@property(readonly) NSArray *menuItemLabels;
@property(readonly) NSArray *values;
@property(readonly) id defaultValue;

@end

