//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface PHAssetResourceRequestOptions : NSObject <NSCopying>
{
    BOOL _networkAccessAllowed;
    BOOL _resistentToPrune;
    BOOL _downloadIsTransient;
    CDUnknownBlockType _progressHandler;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL downloadIsTransient; // @synthesize downloadIsTransient=_downloadIsTransient;
@property(nonatomic) BOOL resistentToPrune; // @synthesize resistentToPrune=_resistentToPrune;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

