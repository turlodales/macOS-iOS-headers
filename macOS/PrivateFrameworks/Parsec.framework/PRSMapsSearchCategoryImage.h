//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Parsec/PRSImage.h>

@class GEOSearchCategory;

@interface PRSMapsSearchCategoryImage : PRSImage
{
    GEOSearchCategory *_geoSearchCategory;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) GEOSearchCategory *geoSearchCategory; // @synthesize geoSearchCategory=_geoSearchCategory;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithGEOSearchCategory:(id)arg1;

@end

