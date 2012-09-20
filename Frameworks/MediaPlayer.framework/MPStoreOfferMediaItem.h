/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPStoreOfferContentRating, NSDictionary;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSCoding, NSCopying> {
    NSDictionary *_lookupCollectionPropertyValues;
    unsigned int _indexInCollectionItems;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
}

+ (BOOL)canFilterByProperty:(id)arg1;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)fallbackPropertyValues;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2 mediaProperty:(id)arg3;
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (BOOL)canMergeStoreOfferMediaItemsLocalItems:(id)arg1;

- (BOOL)isDownloadable;
- (id)mediaLibrary;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(int)arg1;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3 itemIndex:(unsigned int)arg4;
- (int)preferredStoreOfferVariant;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;

@end