//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
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

