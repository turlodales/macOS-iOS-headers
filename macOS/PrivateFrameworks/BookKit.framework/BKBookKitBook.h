//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface BKBookKitBook : NSObject
{
    BOOL _sample;
    BOOL _locked;
    BOOL _proof;
    BOOL _compressed;
    BOOL _hasPendingUpdate;
    BOOL _computedRating;
    NSString *_assetID;
    NSString *_storeID;
    NSString *_author;
    NSString *_sortAuthor;
    NSString *_title;
    NSString *_sortTitle;
    NSString *_scrollDirection;
    NSURL *_url;
    NSString *_genre;
    long long _generation;
    long long _metadataMigrationVersion;
    long long _fileSize;
    unsigned long long _storeFrontID;
    long long _contentType;
    NSNumber *_isExplicit;
    NSDate *_dataSourceInsertionDate;
    NSDate *_releaseDate;
    NSDate *_purchaseDate;
    NSDate *_expectedDate;
    NSDate *_lastOpenDate;
    long long _pageCount;
    long long _rating;
    NSDate *_updateDate;
    NSString *_bookDescription;
    NSString *_comments;
    NSString *_kind;
    NSString *_year;
    NSString *_grouping;
    NSNumber *_versionNumber;
    NSString *_versionNumberHumanReadable;
    NSString *_seriesID;
    NSNumber *_seriesIsHidden;
    NSString *_sequenceDisplayName;
    NSString *_pageProgressionDirection;
    NSURL *_permlink;
}

+ (id)stringOrStringValue:(id)arg1;
+ (id)stringByStrippingHTML:(id)arg1;
+ (id)bookWithBookMetadata:(id)arg1 error:(id *)arg2;
+ (id)updateDateFromBookMetadata:(id)arg1;
+ (id)releaseDateFromBookMetadata:(id)arg1;
+ (id)purchaseDateFromBookMetadata:(id)arg1;
+ (id)dateFromMetadataDate:(id)arg1;
+ (long long)contentTypeForExtension:(id)arg1;
+ (long long)contentTypeForPath:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSURL *permlink; // @synthesize permlink=_permlink;
@property(retain) NSString *pageProgressionDirection; // @synthesize pageProgressionDirection=_pageProgressionDirection;
@property(retain) NSString *sequenceDisplayName; // @synthesize sequenceDisplayName=_sequenceDisplayName;
@property(readonly) NSNumber *seriesIsHidden; // @synthesize seriesIsHidden=_seriesIsHidden;
@property(retain) NSString *seriesID; // @synthesize seriesID=_seriesID;
@property(retain) NSString *versionNumberHumanReadable; // @synthesize versionNumberHumanReadable=_versionNumberHumanReadable;
@property(retain) NSNumber *versionNumber; // @synthesize versionNumber=_versionNumber;
@property BOOL computedRating; // @synthesize computedRating=_computedRating;
@property(retain) NSString *grouping; // @synthesize grouping=_grouping;
@property(retain) NSString *year; // @synthesize year=_year;
@property(retain) NSString *kind; // @synthesize kind=_kind;
@property(retain) NSString *comments; // @synthesize comments=_comments;
@property(retain) NSString *bookDescription; // @synthesize bookDescription=_bookDescription;
@property(retain) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property long long rating; // @synthesize rating=_rating;
@property long long pageCount; // @synthesize pageCount=_pageCount;
@property BOOL hasPendingUpdate; // @synthesize hasPendingUpdate=_hasPendingUpdate;
@property(retain) NSDate *lastOpenDate; // @synthesize lastOpenDate=_lastOpenDate;
@property(retain) NSDate *expectedDate; // @synthesize expectedDate=_expectedDate;
@property(retain) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(retain) NSDate *dataSourceInsertionDate; // @synthesize dataSourceInsertionDate=_dataSourceInsertionDate;
@property(retain) NSNumber *isExplicit; // @synthesize isExplicit=_isExplicit;
@property long long contentType; // @synthesize contentType=_contentType;
@property unsigned long long storeFrontID; // @synthesize storeFrontID=_storeFrontID;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property long long metadataMigrationVersion; // @synthesize metadataMigrationVersion=_metadataMigrationVersion;
@property long long generation; // @synthesize generation=_generation;
@property(getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(getter=isProof) BOOL proof; // @synthesize proof=_proof;
@property(getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(getter=isSample) BOOL sample; // @synthesize sample=_sample;
@property(retain) NSString *genre; // @synthesize genre=_genre;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(retain) NSString *sortTitle; // @synthesize sortTitle=_sortTitle;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *sortAuthor; // @synthesize sortAuthor=_sortAuthor;
@property(retain) NSString *author; // @synthesize author=_author;
@property(retain) NSString *storeID; // @synthesize storeID=_storeID;
@property(retain) NSString *assetID; // @synthesize assetID=_assetID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBookMetadata:(id)arg1 error:(id *)arg2;

@end

