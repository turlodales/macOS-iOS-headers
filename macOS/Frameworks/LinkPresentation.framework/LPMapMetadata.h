//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import "LPLinkMetadataBackwardCompatibility.h"
#import "LPLinkMetadataPresentationTransformer.h"
#import "LPLinkMetadataPreviewTransformer.h"

@class CNPostalAddress, LPImage, NSNumber, NSString;

@interface LPMapMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataBackwardCompatibility>
{
    NSString *_name;
    NSString *_address;
    CNPostalAddress *_addressComponents;
    NSString *_category;
    LPImage *_categoryIcon;
    NSString *_searchQuery;
    NSString *_directionsType;
    NSNumber *_transportType;
    NSString *_directionsSourceAddress;
    CNPostalAddress *_directionsSourceAddressComponents;
    NSString *_directionsSourceLocationName;
    NSString *_directionsDestinationAddress;
    CNPostalAddress *_directionsDestinationAddressComponents;
    NSString *_directionsDestinationLocationName;
    NSNumber *_distance;
    LPImage *_image;
    LPImage *_darkImage;
    struct CLLocationCoordinate2D _location;
}

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) LPImage *darkImage; // @synthesize darkImage=_darkImage;
@property(retain, nonatomic) LPImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSNumber *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *directionsDestinationLocationName; // @synthesize directionsDestinationLocationName=_directionsDestinationLocationName;
@property(copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents; // @synthesize directionsDestinationAddressComponents=_directionsDestinationAddressComponents;
@property(copy, nonatomic) NSString *directionsDestinationAddress; // @synthesize directionsDestinationAddress=_directionsDestinationAddress;
@property(copy, nonatomic) NSString *directionsSourceLocationName; // @synthesize directionsSourceLocationName=_directionsSourceLocationName;
@property(copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents; // @synthesize directionsSourceAddressComponents=_directionsSourceAddressComponents;
@property(copy, nonatomic) NSString *directionsSourceAddress; // @synthesize directionsSourceAddress=_directionsSourceAddress;
@property(retain, nonatomic) NSNumber *transportType; // @synthesize transportType=_transportType;
@property(copy, nonatomic) NSString *directionsType; // @synthesize directionsType=_directionsType;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) LPImage *categoryIcon; // @synthesize categoryIcon=_categoryIcon;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) CNPostalAddress *addressComponents; // @synthesize addressComponents=_addressComponents;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)_iconForTransport;
- (id)_resolvedImage;
- (long long)_style;
- (id)_bottomLineForTwoUpForTransformer:(id)arg1;
- (id)_topLineForTransformer:(id)arg1;
- (id)_singleLineVerboseDescription;
- (id)_singleLineShortDescription;
- (id)_deduplicatedAddress;
- (id)_name;
- (BOOL)_isDirections;
- (id)_directionsDestinationAddress;
- (id)_directionsSourceAddress;
- (id)_address;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

