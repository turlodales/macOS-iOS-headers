//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdate/SUProduct.h>

@class NSDictionary, NSMutableSet, NSString, NSURL;

@interface SULocalProduct : SUProduct
{
    NSString *_productPath;
    NSDictionary *_packageReferences;
    NSMutableSet *_mustCloseAppsToInstallProduct;
    NSURL *_altDistPackageURL;
    SUProduct *_remoteProduct;
}

@property(retain) SUProduct *remoteProduct; // @synthesize remoteProduct=_remoteProduct;
- (id)systemImagePackage;
- (int)restartAction;
- (id)mustCloseAppsToInstallProduct;
- (id)packageReferenceForPackageIdentifier:(id)arg1;
- (unsigned long long)installSize;
- (id)orderedPackageSpecifiersToInstall;
- (unsigned long long)sizeAlreadyDownloaded;
- (BOOL)isCompletelyDownloaded;
- (id)outdatedExtraPackageReferences;
- (id)invalidPackageRefsInProductDirectory;
- (id)_localPackageReferenceFromDistribution:(id)arg1;
- (BOOL)hasInstallablePackages;
- (id)distributionEvaluationMetainfo;
- (id)distributionEnvironment;
- (id)personalizedManifestsPath;
- (id)distributionPath;
- (id)productPath;
- (void)dealloc;
- (id)initWithProduct:(id)arg1 productPath:(id)arg2 error:(id *)arg3;

@end

