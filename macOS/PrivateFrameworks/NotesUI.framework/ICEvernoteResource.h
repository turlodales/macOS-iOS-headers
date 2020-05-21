//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString;

@interface ICEvernoteResource : NSObject <NSSecureCoding>
{
    BOOL _isAttachment;
    NSString *_mime;
    NSString *_fileName;
    NSData *_data;
    NSString *_md5Hash;
    double _imageWidth;
    double _imageHeight;
    double _duration;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *md5Hash; // @synthesize md5Hash=_md5Hash;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *mime; // @synthesize mime=_mime;
@property(nonatomic) BOOL isAttachment; // @synthesize isAttachment=_isAttachment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

