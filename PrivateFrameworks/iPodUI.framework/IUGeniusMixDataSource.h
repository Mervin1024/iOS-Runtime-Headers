/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableArray;

@interface IUGeniusMixDataSource : IUMediaDataSource {
    BOOL _canScheduledBackgroundPreload;
    unsigned int _countOfMixes;
    double _lastPreloadTime;
    NSMutableArray *_mixes;
    BOOL _needsBackgroundPreload;
    double _preloadDelay;
}

@property(readonly) unsigned int countOfMixes;

+ (id)defaultTitle;
+ (id)moreListTitleKey;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (void)_artworkCacheDidChangeNotification:(id)arg1;
- (void)_cacheMixArtworkInBackground:(id)arg1;
- (id)_geniusMixAtIndex:(unsigned int)arg1;
- (void)_invalidateForArtworkCacheChange;
- (void)_scheduleBackgroundPreload;
- (unsigned int)countOfMixes;
- (void)dealloc;
- (unsigned int)indexOfMix:(id)arg1;
- (id)init;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (struct CGImage { }*)loadRepresentativeImageAtIndex:(unsigned int)arg1 withTileLength:(float)arg2 completionBlock:(id)arg3;
- (id)mixAtIndex:(unsigned int)arg1;
- (id)mixNameAtIndex:(unsigned int)arg1;
- (void)reloadData;
- (id)representativeArtistsAtIndex:(unsigned int)arg1;
- (void)unloadReloadableData;
- (id)viewControllerContextForIndex:(unsigned int)arg1;

@end