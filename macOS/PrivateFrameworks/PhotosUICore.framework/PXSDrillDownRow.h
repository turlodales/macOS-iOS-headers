//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSRow.h>

@class PXSModule, PXSettings;

@interface PXSDrillDownRow : PXSRow
{
    PXSettings *_childSettings;
    PXSModule *_childModule;
    BOOL _isPrepared;
}

+ (id)rowWithTitle:(id)arg1 childSettings:(id)arg2;
+ (id)rowWithTitle:(id)arg1 childSettingsKeyPath:(id)arg2;
- (void).cxx_destruct;
- (id)valueViewReuseIdentifier;
- (id)children;
- (void)prepare;

@end

