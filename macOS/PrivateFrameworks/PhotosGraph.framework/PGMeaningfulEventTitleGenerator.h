//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator
{
    NSString *_meaningLabel;
    BOOL _meaningIsReliable;
}

- (void).cxx_destruct;
- (id)_timeTitle;
- (id)_meaningLabelForTitle;
- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3;

@end

