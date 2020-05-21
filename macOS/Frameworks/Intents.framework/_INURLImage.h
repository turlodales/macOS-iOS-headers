//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INImage.h>

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface _INURLImage : INImage
{
    NSData *_sandboxExtensionData;
    NSURL *_imageURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData; // @synthesize _sandboxExtensionData;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_isSupportedForDonation;
- (BOOL)_isEligibleForProxying;
- (id)_initWithURLRepresentation:(id)arg1;
- (id)_URLRepresentation;
- (void)_setUri:(id)arg1;
- (id)_uri;
- (id)_copyWithSubclass:(Class)arg1;
- (BOOL)_requiresRetrieval;
- (id)_identifier;
- (id)_dictionaryRepresentation;
- (id)initWithImageURL:(id)arg1;
- (void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

