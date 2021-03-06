//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAutocompleteFilter-Protocol.h>
#import <GeoServices/GEOSearchFilter-Protocol.h>

@class GEOSearchCategory;

@interface GEOBrowseCategoryFilter : NSObject <GEOSearchFilter, GEOAutocompleteFilter>
{
    GEOSearchCategory *_category;
}

- (void).cxx_destruct;
- (BOOL)applyToSearchParameters:(id)arg1 error:(id *)arg2;
- (BOOL)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;
- (id)initWithCategory:(id)arg1;
- (id)init;

@end

