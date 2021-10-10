#include <iostream>
#include "hlist_item.h"

HListItem::HListItem(std::shared_ptr<Hexagon> &hexagon) {
  this->hexagon = hexagon;
  this->next = nullptr;
}
std::ostream& operator<<(std::ostream& os,HListItem& obj) {
  os << "[" << obj.hexagon << "]" << std::endl;
  return os;
}
HListItem::~HListItem() {
}
