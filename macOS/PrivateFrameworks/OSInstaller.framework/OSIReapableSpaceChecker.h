//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSInstallOptions, SMPaths;

@interface OSIReapableSpaceChecker : NSObject
{
    SMPaths *_pather;
    OSInstallOptions *_options;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) OSInstallOptions *options; // @synthesize options=_options;
@property(retain) SMPaths *pather; // @synthesize pather=_pather;
- (id)reapableFiles;
- (id)reapableSpace;
- (void)_calculateSystemPathsAndSize;
- (BOOL)willBlock;
- (id)initWithOptions:(id)arg1;

@end

