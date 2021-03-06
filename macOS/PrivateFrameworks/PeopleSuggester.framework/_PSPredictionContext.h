//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, NSUUID;

@interface _PSPredictionContext : NSObject <NSSecureCoding>
{
    NSDate *_suggestionDate;
    NSUUID *_locationUUID;
    NSArray *_locationUUIDs;
    long long _locationType;
    NSString *_bundleID;
    NSString *_accountIdentifier;
    NSArray *_seedRecipients;
    NSArray *_candidateShareExtensionBundleIds;
    NSDictionary *_appBundleIdsToShareExtensionBundleIdsMapping;
    NSArray *_attachments;
    NSArray *_photoSuggestedPeople;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *photoSuggestedPeople; // @synthesize photoSuggestedPeople=_photoSuggestedPeople;
@property(retain, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping; // @synthesize appBundleIdsToShareExtensionBundleIdsMapping=_appBundleIdsToShareExtensionBundleIdsMapping;
@property(copy, nonatomic) NSArray *candidateShareExtensionBundleIds; // @synthesize candidateShareExtensionBundleIds=_candidateShareExtensionBundleIds;
@property(copy, nonatomic) NSArray *seedRecipients; // @synthesize seedRecipients=_seedRecipients;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(nonatomic) long long locationType; // @synthesize locationType=_locationType;
@property(copy, nonatomic) NSArray *locationUUIDs; // @synthesize locationUUIDs=_locationUUIDs;
@property(copy, nonatomic) NSUUID *locationUUID; // @synthesize locationUUID=_locationUUID;
@property(copy, nonatomic) NSDate *suggestionDate; // @synthesize suggestionDate=_suggestionDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

