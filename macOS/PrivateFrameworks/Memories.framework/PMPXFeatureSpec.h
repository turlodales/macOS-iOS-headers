//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PXFeatureSpec.h"

@class NSString;

@interface PMPXFeatureSpec : PXFeatureSpec
{
    NSString *_fontName;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)specForFont:(id)arg1 size:(struct CGSize)arg2;
- (id)verticalExportSpecForFont:(id)arg1 size:(struct CGSize)arg2;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;

@end

