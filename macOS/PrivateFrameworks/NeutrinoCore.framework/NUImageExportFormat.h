//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NSCopying-Protocol.h>

@interface NUImageExportFormat : NSObject <NSCopying>
{
}

+ (id)defaultFormatForURL:(id)arg1;
- (void)addImageDestinationOptionsToImageProperties:(id)arg1;
- (int)renderFormat;
- (id)fileType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

