//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WFColor.h"

@class NSString, WFGradient;

@interface WFColor (WorkflowPalette)
+ (id)colorWithPaletteColor:(unsigned long long)arg1;
+ (id)workflowGradientPalette;
+ (id)workflowPaletteNames;
+ (id)workflowPalette;
+ (id)colorWithP3RGBAValue:(unsigned int)arg1;
+ (id)colorWithRGBAValue:(unsigned int)arg1;
@property(readonly, nonatomic) WFGradient *paletteGradient;
@property(readonly, nonatomic) NSString *hexValue;
@property(readonly, nonatomic) unsigned int RGBAValue;
@end

