//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INImage;

@protocol INImageSizeProvider <NSObject>
+ (CDStruct_8caa76fc)imageSizeForImage:(INImage *)arg1;
+ (INImage *)downscaledPNGImageForImage:(INImage *)arg1 size:(CDStruct_8caa76fc)arg2 error:(id *)arg3;
@end

