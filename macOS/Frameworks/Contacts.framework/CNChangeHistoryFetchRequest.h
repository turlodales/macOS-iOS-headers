//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNFetchRequest.h>

#import "NSSecureCoding.h"

@class CNChangeHistoryAnchor, NSArray, NSData, NSString;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding>
{
    BOOL _shouldUnifyResults;
    BOOL _mutableObjects;
    BOOL _includeGroupChanges;
    BOOL _enforceClientIdentifier;
    BOOL _includeChangeAnchors;
    BOOL _includeChangeIDs;
    BOOL _includeExternalIDs;
    BOOL _includeImagesChanged;
    BOOL _includeLabeledValueChanges;
    NSData *_startingToken;
    NSArray *_additionalContactKeyDescriptors;
    NSArray *_excludedTransactionAuthors;
    NSString *_clientIdentifier;
    NSString *_containerIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) BOOL includeLabeledValueChanges; // @synthesize includeLabeledValueChanges=_includeLabeledValueChanges;
@property(nonatomic) BOOL includeImagesChanged; // @synthesize includeImagesChanged=_includeImagesChanged;
@property(nonatomic) BOOL includeExternalIDs; // @synthesize includeExternalIDs=_includeExternalIDs;
@property(nonatomic) BOOL includeChangeIDs; // @synthesize includeChangeIDs=_includeChangeIDs;
@property(nonatomic) BOOL includeChangeAnchors; // @synthesize includeChangeAnchors=_includeChangeAnchors;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic, getter=shouldEnforceClientIdentifer) BOOL enforceClientIdentifier; // @synthesize enforceClientIdentifier=_enforceClientIdentifier;
@property(copy, nonatomic) NSArray *excludedTransactionAuthors; // @synthesize excludedTransactionAuthors=_excludedTransactionAuthors;
@property(nonatomic) BOOL includeGroupChanges; // @synthesize includeGroupChanges=_includeGroupChanges;
@property(nonatomic) BOOL mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) BOOL shouldUnifyResults; // @synthesize shouldUnifyResults=_shouldUnifyResults;
@property(copy, nonatomic) NSArray *additionalContactKeyDescriptors; // @synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors;
@property(copy, nonatomic) NSData *startingToken; // @synthesize startingToken=_startingToken;
@property(nonatomic) BOOL unifyResults;
- (void)setStartingAnchor:(id)arg1;
@property(readonly, nonatomic) CNChangeHistoryAnchor *startingAnchor;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartingAnchor:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;

@end

