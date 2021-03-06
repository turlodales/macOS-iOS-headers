//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat
{
    BOOL _preserveAlpha;
    long long _pixelType;
    long long _compression;
}

@property BOOL preserveAlpha; // @synthesize preserveAlpha=_preserveAlpha;
@property long long compression; // @synthesize compression=_compression;
@property long long pixelType; // @synthesize pixelType=_pixelType;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (int)depth;
- (int)renderFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

