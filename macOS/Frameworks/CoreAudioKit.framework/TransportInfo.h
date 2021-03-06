//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/NSCopying-Protocol.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface TransportInfo : NSObject <NSCopying>
{
    NSImage *image;
    NSString *name;
}

+ (id)imageForType:(unsigned int)arg1;
@property(retain) NSImage *image; // @synthesize image;
@property(retain) NSString *name; // @synthesize name;
- (BOOL)isEqualTo:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithTransportType:(unsigned int)arg1 name:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

