//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatPNG : NUImageExportFormat
{
    BOOL _preserveAlpha;
}

@property BOOL preserveAlpha; // @synthesize preserveAlpha=_preserveAlpha;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (int)renderFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

