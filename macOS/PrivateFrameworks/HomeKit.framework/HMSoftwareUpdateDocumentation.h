//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMHTMLDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding>
{
    HMHTMLDocument *_releaseNotesSummary;
    HMHTMLDocument *_releaseNotes;
    HMHTMLDocument *_licenseAgreement;
    NSNumber *_licenseAgreementVersion;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSNumber *licenseAgreementVersion; // @synthesize licenseAgreementVersion=_licenseAgreementVersion;
@property(readonly, copy) HMHTMLDocument *licenseAgreement; // @synthesize licenseAgreement=_licenseAgreement;
@property(readonly, copy) HMHTMLDocument *releaseNotes; // @synthesize releaseNotes=_releaseNotes;
@property(readonly, copy) HMHTMLDocument *releaseNotesSummary; // @synthesize releaseNotesSummary=_releaseNotesSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 licenseAgreement:(id)arg3 licenseAgreementVersion:(id)arg4;
- (id)init;

@end

