//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSColorProfile : NSObject <NSCoding>
{
    void *_profile;
    void *_header;
    NSURL *_location;
    void *_md5;
    NSString *_name;
    void *_dProfileRef;
    void *_reserved;
}

+ (id)availableProfiles;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)_isGenericProfile;
- (long long)_appropriateColorPanelSliderPane;
- (unsigned int)_colorSyncProfileClass;
- (unsigned int)_colorSyncProfileSpace;
- (id)description;
- (id)localizedName;
- (void *)MD5;
- (id)ICCProfileData;
- (void *)colorSyncProfile;
- (void)dealloc;
- (id)initWithColorSyncInfo:(void *)arg1;
- (id)initWithICCProfileData:(id)arg1;
- (id)initWithColorSyncProfile:(void *)arg1;

@end

