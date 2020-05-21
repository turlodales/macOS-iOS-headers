//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSData, NSImage, NSString, NSURL;

@interface NSSharingItem : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_url;
    NSURL *_coordinatedURL;
    NSString *_type;
    NSString *_string;
    NSData *_data;
    NSImage *_sourceImage;
    NSImage *_shareImage;
    struct CGRect _sourceFrame;
    struct CGRect _sourceImageContentRect;
    struct CGRect _shareImageContentRect;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property struct CGRect shareImageContentRect; // @synthesize shareImageContentRect=_shareImageContentRect;
@property(retain) NSImage *shareImage; // @synthesize shareImage=_shareImage;
@property struct CGRect sourceImageContentRect; // @synthesize sourceImageContentRect=_sourceImageContentRect;
@property(retain) NSImage *sourceImage; // @synthesize sourceImage=_sourceImage;
@property struct CGRect sourceFrame; // @synthesize sourceFrame=_sourceFrame;
@property(retain) NSData *data; // @synthesize data=_data;
@property(retain) NSString *string; // @synthesize string=_string;
@property(retain) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSURL *coordinatedURL; // @synthesize coordinatedURL=_coordinatedURL;
- (id)shareItemData;
- (id)shareItemImage;
- (id)shareItemString;
- (id)shareItemURL;
- (id)description;
- (void)coordinatedURLWithCompletion:(CDUnknownBlockType)arg1;
- (id)coordinatedURLWithError:(id *)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain) NSImage *image; // @dynamic image;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareItem:(id)arg1;

@end

