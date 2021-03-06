//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PackageKit/PKProduct.h>

@class PKArchive, PKDistribution;

@interface PKFolderArchiveProduct : PKProduct
{
    PKArchive *_archive;
    PKDistribution *_distribution;
}

+ (BOOL)canInitWithURL:(id)arg1;
- (id)_synthesizedDistributionFromMetaPackageInArchive:(id)arg1;
- (id)_distributionDataFromArchive:(id)arg1 returningDistributionURL:(id *)arg2 error:(id *)arg3;
- (id)allPackageReferences;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distributionContainer;
- (id)distribution;
- (id)productType;
- (id)URL;
- (void)dealloc;
- (id)_initWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)evaluateTrustReturningError:(id *)arg1;
- (id)_archiveForTrustEvaluation;
- (id)initByLoadingProductAtURL:(id)arg1 error:(id *)arg2;

@end

