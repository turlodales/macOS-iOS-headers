//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/SHMatcher-Protocol.h>

@class MRE, NSString, SHLocalConfiguration;
@protocol SHMatcherDelegate;

__attribute__((visibility("hidden")))
@interface SHMRESignatureMatcher : NSObject <SHMatcher>
{
    id <SHMatcherDelegate> delegate;
    MRE *_mre;
    SHLocalConfiguration *_localConfiguration;
}

- (void).cxx_destruct;
@property(retain) SHLocalConfiguration *localConfiguration; // @synthesize localConfiguration=_localConfiguration;
@property(retain) MRE *mre; // @synthesize mre=_mre;
@property __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (id)mediaItemsFromMREResult:(id)arg1;
- (void)match:(id)arg1;
- (id)MRESignaturesFromMatches:(id)arg1;
- (void)buildMRE;
- (id)initWithLocalRecognitionConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

