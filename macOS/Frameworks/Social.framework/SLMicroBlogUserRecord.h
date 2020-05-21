//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, UIImage;

@interface SLMicroBlogUserRecord : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_screen_name;
    NSString *_profile_image_url;
    UIImage *_profileImageCache;
}

+ (BOOL)supportsSecureCoding;
+ (id)userRecordWithDictionaryRepresentation:(id)arg1;
- (void).cxx_destruct;
@property(retain) UIImage *profileImageCache; // @synthesize profileImageCache=_profileImageCache;
@property(retain, nonatomic) NSString *profile_image_url; // @synthesize profile_image_url=_profile_image_url;
@property(retain, nonatomic) NSString *screen_name; // @synthesize screen_name=_screen_name;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setValuesWithUserDictionary:(id)arg1;

@end

